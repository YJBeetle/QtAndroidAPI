#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio::channels
{
	class AsynchronousFileChannel;
}
namespace __jni_impl::java::nio::channels
{
	class FileChannel;
}

namespace __jni_impl::java::nio::channels
{
	class FileLock : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject acquiredBy();
		QAndroidJniObject channel();
		void close();
		jboolean isShared();
		jboolean isValid();
		jboolean overlaps(jlong arg0, jlong arg1);
		jlong position();
		void release();
		jlong size();
		jstring toString();
	};
} // namespace __jni_impl::java::nio::channels

#include "AsynchronousFileChannel.hpp"
#include "FileChannel.hpp"

namespace __jni_impl::java::nio::channels
{
	// Fields
	
	// Constructors
	void FileLock::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.FileLock",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject FileLock::acquiredBy()
	{
		return __thiz.callObjectMethod(
			"acquiredBy",
			"()Ljava/nio/channels/Channel;"
		);
	}
	QAndroidJniObject FileLock::channel()
	{
		return __thiz.callObjectMethod(
			"channel",
			"()Ljava/nio/channels/FileChannel;"
		);
	}
	void FileLock::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean FileLock::isShared()
	{
		return __thiz.callMethod<jboolean>(
			"isShared",
			"()Z"
		);
	}
	jboolean FileLock::isValid()
	{
		return __thiz.callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	jboolean FileLock::overlaps(jlong arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"overlaps",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
	jlong FileLock::position()
	{
		return __thiz.callMethod<jlong>(
			"position",
			"()J"
		);
	}
	void FileLock::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	jlong FileLock::size()
	{
		return __thiz.callMethod<jlong>(
			"size",
			"()J"
		);
	}
	jstring FileLock::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class FileLock : public __jni_impl::java::nio::channels::FileLock
	{
	public:
		FileLock(QAndroidJniObject obj) { __thiz = obj; }
		FileLock()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

