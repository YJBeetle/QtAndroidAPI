#pragma once

#ifndef ANDROID_MEDIA_SOUNDPOOL
#define ANDROID_MEDIA_SOUNDPOOL

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::android::content::res
{
	class AssetFileDescriptor;
}
namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::media
{
	class SoundPool : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jint arg1, jint arg2);
		
		// Methods
		jint load(__jni_impl::java::io::FileDescriptor arg0, jlong arg1, jlong arg2, jint arg3);
		jint load(__jni_impl::android::content::res::AssetFileDescriptor arg0, jint arg1);
		jint load(__jni_impl::android::content::Context arg0, jint arg1, jint arg2);
		jint load(jstring arg0, jint arg1);
		void setPriority(jint arg0, jint arg1);
		void resume(jint arg0);
		void stop(jint arg0);
		void release();
		jboolean unload(jint arg0);
		void autoPause();
		void autoResume();
		void setLoop(jint arg0, jint arg1);
		void setRate(jint arg0, jfloat arg1);
		void setOnLoadCompleteListener(__jni_impl::__JniBaseClass arg0);
		void pause(jint arg0);
		void setVolume(jint arg0, jfloat arg1, jfloat arg2);
		jint play(jint arg0, jfloat arg1, jfloat arg2, jint arg3, jint arg4, jfloat arg5);
	};
} // namespace __jni_impl::android::media

#include "../../java/io/FileDescriptor.hpp"
#include "../content/res/AssetFileDescriptor.hpp"
#include "../content/Context.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void SoundPool::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.media.SoundPool",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
	jint SoundPool::load(__jni_impl::java::io::FileDescriptor arg0, jlong arg1, jlong arg2, jint arg3)
	{
		return __thiz.callMethod<jint>(
			"load",
			"(Ljava/io/FileDescriptor;JJI)I",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	jint SoundPool::load(__jni_impl::android::content::res::AssetFileDescriptor arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"load",
			"(Landroid/content/res/AssetFileDescriptor;I)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint SoundPool::load(__jni_impl::android::content::Context arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"load",
			"(Landroid/content/Context;II)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jint SoundPool::load(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"load",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	void SoundPool::setPriority(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setPriority",
			"(II)V",
			arg0,
			arg1
		);
	}
	void SoundPool::resume(jint arg0)
	{
		__thiz.callMethod<void>(
			"resume",
			"(I)V",
			arg0
		);
	}
	void SoundPool::stop(jint arg0)
	{
		__thiz.callMethod<void>(
			"stop",
			"(I)V",
			arg0
		);
	}
	void SoundPool::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	jboolean SoundPool::unload(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"unload",
			"(I)Z",
			arg0
		);
	}
	void SoundPool::autoPause()
	{
		__thiz.callMethod<void>(
			"autoPause",
			"()V"
		);
	}
	void SoundPool::autoResume()
	{
		__thiz.callMethod<void>(
			"autoResume",
			"()V"
		);
	}
	void SoundPool::setLoop(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setLoop",
			"(II)V",
			arg0,
			arg1
		);
	}
	void SoundPool::setRate(jint arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setRate",
			"(IF)V",
			arg0,
			arg1
		);
	}
	void SoundPool::setOnLoadCompleteListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnLoadCompleteListener",
			"(Landroid/media/SoundPool$OnLoadCompleteListener;)V",
			arg0.__jniObject().object()
		);
	}
	void SoundPool::pause(jint arg0)
	{
		__thiz.callMethod<void>(
			"pause",
			"(I)V",
			arg0
		);
	}
	void SoundPool::setVolume(jint arg0, jfloat arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"setVolume",
			"(IFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	jint SoundPool::play(jint arg0, jfloat arg1, jfloat arg2, jint arg3, jint arg4, jfloat arg5)
	{
		return __thiz.callMethod<jint>(
			"play",
			"(IFFIIF)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class SoundPool : public __jni_impl::android::media::SoundPool
	{
	public:
		SoundPool(QAndroidJniObject obj) { __thiz = obj; }
		SoundPool(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_SOUNDPOOL

