# LSSWarToAmr
如果出现错误
"_Decoder_Interface_exit", referenced from: _decode_amr in wav_amr.o 
选 中Targets—>Build Settings—>Architectures。双击Architectures，选择other，删除$(ARCH_STANDARD) (点’-’)，然后增加armv7和armv7s(点‘+’)。clean一下再编译就行了。


安卓和iOS录音音频文件 wav和amr互转
*注意iOS录音wav格式的rate设置为8000

