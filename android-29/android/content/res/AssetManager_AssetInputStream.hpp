#pragma once

#ifndef ANDROID_CONTENT_RES_ASSETMANAGER_ASSETINPUTSTREAM
#define ANDROID_CONTENT_RES_ASSETMANAGER_ASSETINPUTSTREAM

#include "../../../java/io/InputStream.hpp"

namespace __jni_impl::android::content::res
{
	class AssetManager;
}

namespace __jni_impl::android::content::res
{
	class AssetManager_AssetInputStream : public __jni_impl::java::io::InputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint read();
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jint read(jbyteArray arg0);
		void close();
		void mark(jint arg0);
		jlong skip(jlong arg0);
		jint available();
		jboolean markSupported();
		void reset();
	};
} // namespace __jni_impl::android::content::res

#include "AssetManager.hpp"

namespace __jni_impl::android::content::res
{
	// Fields
	
	// Constructors
	void AssetManager_AssetInputStream::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.res.AssetManager$AssetInputStream",
			"(V)V");
	}
	
	// Methods
	jint AssetManager_AssetInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I");
	}
	jint AssetManager_AssetInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2);
	}
	jint AssetManager_AssetInputStream::read(jbyteArray arg0)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([B)I",
			arg0);
	}
	void AssetManager_AssetInputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	void AssetManager_AssetInputStream::mark(jint arg0)
	{
		__thiz.callMethod<void>(
			"mark",
			"(I)V",
			arg0);
	}
	jlong AssetManager_AssetInputStream::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0);
	}
	jint AssetManager_AssetInputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I");
	}
	jboolean AssetManager_AssetInputStream::markSupported()
	{
		return __thiz.callMethod<jboolean>(
			"markSupported",
			"()Z");
	}
	void AssetManager_AssetInputStream::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V");
	}
} // namespace __jni_impl::android::content::res

namespace android::content::res
{
	class AssetManager_AssetInputStream : public __jni_impl::android::content::res::AssetManager_AssetInputStream
	{
	public:
		AssetManager_AssetInputStream(QAndroidJniObject obj) { __thiz = obj; }
		AssetManager_AssetInputStream()
		{
			__constructor();
		}
	};
} // namespace android::content::res

#endif // ANDROID_CONTENT_RES_ASSETMANAGER_ASSETINPUTSTREAM

