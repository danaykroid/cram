### Tools used 

- build system: Cmake 
- language: cpp

### NOTES 

1. keep the extension according to the extension based on that you will decompression 
e.g => data.cram.gz

### Requirements 

- user should be able to compress multiple dir and files and once with sample structure 
- it should restore the permissions and symlinks
- user should be able to choose between multiple compression algos 
- user should be able to extract the files and dirs
- corruption check after untar

### Tar working 

 - tar stores data blocks in 512 bytes of sequence of block that stores the metadata like 
 file permissions and things archieve ends with two empty blocks as terminator

### Tasks to achieve 

1. just pack multiple files in a single file (no compression, no extraction no extraction logic)
2. unpack the same files back(no permission or timestamps retention)
3. pack and unpack with permissions
4. add compression to pack into single file 
5. unpack with decompression
6. hit performance benchmarks 

### Commands to support 

1. -c => create cram file (no compression)
2. -v => verbose output
3. -x => extract
4. -g => gzip compression 
5. -b => bzip compression
6. 

