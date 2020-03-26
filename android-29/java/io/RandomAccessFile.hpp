#pragma once

#ifndef JAVA_IO_RANDOMACCESSFILE
#define JAVA_IO_RANDOMACCESSFILE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::nio::channels
{
	class FileChannel;
}
namespace __jni_impl::java::io
{
	class File;
}

namespace __jni_impl::java::io
{
	class RandomAccessFile : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::File arg0, jstring arg1);
		void __constructor(jstring arg0, jstring arg1);
		
		// Methods
		jlong length();
		void write(jbyteArray arg0, jint arg1, jint arg2);
		void write(jbyteArray arg0);
		void write(jint arg0);
		jint read(jbyteArray arg0);
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jint read();
		jstring readLine();
		void setLength(jlong arg0);
		void close();
		void writeInt(jint arg0);
		jint readInt();
		void writeUTF(jstring arg0);
		jstring readUTF();
		void writeFloat(jfloat arg0);
		jfloat readFloat();
		QAndroidJniObject getFD();
		QAndroidJniObject getChannel();
		void writeBytes(jstring arg0);
		jlong getFilePointer();
		jlong readLong();
		void writeLong(jlong arg0);
		jint skipBytes(jint arg0);
		jboolean readBoolean();
		jbyte readByte();
		jint readUnsignedByte();
		jshort readShort();
		jint readUnsignedShort();
		jdouble readDouble();
		void writeBoolean(jboolean arg0);
		void writeByte(jint arg0);
		void writeShort(jint arg0);
		void writeDouble(jdouble arg0);
		void writeChars(jstring arg0);
		void seek(jlong arg0);
		void readFully(jbyteArray arg0, jint arg1, jint arg2);
		void readFully(jbyteArray arg0);
		void writeChar(jint arg0);
		jchar readChar();
	};
} // namespace __jni_impl::java::io

#include "FileDescriptor.hpp"
#include "../nio/channels/FileChannel.hpp"
#include "File.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void RandomAccessFile::__constructor(__jni_impl::java::io::File arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.RandomAccessFile",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void RandomAccessFile::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.RandomAccessFile",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	
	// Methods
	jlong RandomAccessFile::length()
	{
		return __thiz.callMethod<jlong>(
			"length",
			"()J"
		);
	}
	void RandomAccessFile::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void RandomAccessFile::write(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"([B)V",
			arg0
		);
	}
	void RandomAccessFile::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	jint RandomAccessFile::read(jbyteArray arg0)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([B)I",
			arg0
		);
	}
	jint RandomAccessFile::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint RandomAccessFile::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jstring RandomAccessFile::readLine()
	{
		return __thiz.callObjectMethod(
			"readLine",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void RandomAccessFile::setLength(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setLength",
			"(J)V",
			arg0
		);
	}
	void RandomAccessFile::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void RandomAccessFile::writeInt(jint arg0)
	{
		__thiz.callMethod<void>(
			"writeInt",
			"(I)V",
			arg0
		);
	}
	jint RandomAccessFile::readInt()
	{
		return __thiz.callMethod<jint>(
			"readInt",
			"()I"
		);
	}
	void RandomAccessFile::writeUTF(jstring arg0)
	{
		__thiz.callMethod<void>(
			"writeUTF",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jstring RandomAccessFile::readUTF()
	{
		return __thiz.callObjectMethod(
			"readUTF",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void RandomAccessFile::writeFloat(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"writeFloat",
			"(F)V",
			arg0
		);
	}
	jfloat RandomAccessFile::readFloat()
	{
		return __thiz.callMethod<jfloat>(
			"readFloat",
			"()F"
		);
	}
	QAndroidJniObject RandomAccessFile::getFD()
	{
		return __thiz.callObjectMethod(
			"getFD",
			"()Ljava/io/FileDescriptor;"
		);
	}
	QAndroidJniObject RandomAccessFile::getChannel()
	{
		return __thiz.callObjectMethod(
			"getChannel",
			"()Ljava/nio/channels/FileChannel;"
		);
	}
	void RandomAccessFile::writeBytes(jstring arg0)
	{
		__thiz.callMethod<void>(
			"writeBytes",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jlong RandomAccessFile::getFilePointer()
	{
		return __thiz.callMethod<jlong>(
			"getFilePointer",
			"()J"
		);
	}
	jlong RandomAccessFile::readLong()
	{
		return __thiz.callMethod<jlong>(
			"readLong",
			"()J"
		);
	}
	void RandomAccessFile::writeLong(jlong arg0)
	{
		__thiz.callMethod<void>(
			"writeLong",
			"(J)V",
			arg0
		);
	}
	jint RandomAccessFile::skipBytes(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"skipBytes",
			"(I)I",
			arg0
		);
	}
	jboolean RandomAccessFile::readBoolean()
	{
		return __thiz.callMethod<jboolean>(
			"readBoolean",
			"()Z"
		);
	}
	jbyte RandomAccessFile::readByte()
	{
		return __thiz.callMethod<jbyte>(
			"readByte",
			"()B"
		);
	}
	jint RandomAccessFile::readUnsignedByte()
	{
		return __thiz.callMethod<jint>(
			"readUnsignedByte",
			"()I"
		);
	}
	jshort RandomAccessFile::readShort()
	{
		return __thiz.callMethod<jshort>(
			"readShort",
			"()S"
		);
	}
	jint RandomAccessFile::readUnsignedShort()
	{
		return __thiz.callMethod<jint>(
			"readUnsignedShort",
			"()I"
		);
	}
	jdouble RandomAccessFile::readDouble()
	{
		return __thiz.callMethod<jdouble>(
			"readDouble",
			"()D"
		);
	}
	void RandomAccessFile::writeBoolean(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"writeBoolean",
			"(Z)V",
			arg0
		);
	}
	void RandomAccessFile::writeByte(jint arg0)
	{
		__thiz.callMethod<void>(
			"writeByte",
			"(I)V",
			arg0
		);
	}
	void RandomAccessFile::writeShort(jint arg0)
	{
		__thiz.callMethod<void>(
			"writeShort",
			"(I)V",
			arg0
		);
	}
	void RandomAccessFile::writeDouble(jdouble arg0)
	{
		__thiz.callMethod<void>(
			"writeDouble",
			"(D)V",
			arg0
		);
	}
	void RandomAccessFile::writeChars(jstring arg0)
	{
		__thiz.callMethod<void>(
			"writeChars",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void RandomAccessFile::seek(jlong arg0)
	{
		__thiz.callMethod<void>(
			"seek",
			"(J)V",
			arg0
		);
	}
	void RandomAccessFile::readFully(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"readFully",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void RandomAccessFile::readFully(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"readFully",
			"([B)V",
			arg0
		);
	}
	void RandomAccessFile::writeChar(jint arg0)
	{
		__thiz.callMethod<void>(
			"writeChar",
			"(I)V",
			arg0
		);
	}
	jchar RandomAccessFile::readChar()
	{
		return __thiz.callMethod<jchar>(
			"readChar",
			"()C"
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class RandomAccessFile : public __jni_impl::java::io::RandomAccessFile
	{
	public:
		RandomAccessFile(QAndroidJniObject obj) { __thiz = obj; }
		RandomAccessFile(__jni_impl::java::io::File arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		RandomAccessFile(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::io

#endif // JAVA_IO_RANDOMACCESSFILE

