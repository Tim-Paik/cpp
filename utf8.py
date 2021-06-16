#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import os
import sys
import chardet
 
def convert(filename,out_enc='utf-8'):
  try:
    with open(filename,'rb') as f:
        content_bytes=f.read()
    
    source_encoding=chardet.detect(content_bytes).get('encoding')

    with open(filename,'r',encoding = source_encoding) as f :
        content_str=f.read()
    
    with open(filename,'w',encoding = out_enc) as f :
        f.write(content_str)
    
    with open(filename,'rb') as f :
        content_bb=f.read()
    print(filename + " from " + source_encoding + " to " + chardet.detect(content_bb)["encoding"])
    
  except IOError as err:
    print("I/O error:{0}".format(err))

def explore(dir): 
  for root,dirs,files in os.walk(dir):
    for file in files: 
      if os.path.splitext(file)[1]=='.cpp':
        path=os.path.join(root,file)
        convert(path) 

if __name__=="__main__": 
    explore(os.getcwd())
    os.system("pause")