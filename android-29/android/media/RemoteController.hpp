#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::media
{
	class RemoteController_MetadataEditor;
}
namespace __jni_impl::android::os
{
	class Looper;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}

namespace __jni_impl::android::media
{
	class RemoteController : public __JniBaseClass
	{
	public:
		// Fields
		static jint POSITION_SYNCHRONIZATION_CHECK();
		static jint POSITION_SYNCHRONIZATION_NONE();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Looper arg2);
		
		// Methods
		jboolean clearArtworkConfiguration();
		QAndroidJniObject editMetadata();
		jlong getEstimatedMediaPosition();
		jboolean seekTo(jlong arg0);
		jboolean sendMediaKeyEvent(__jni_impl::android::view::KeyEvent arg0);
		jboolean setArtworkConfiguration(jint arg0, jint arg1);
		jboolean setSynchronizationMode(jint arg0);
	};
} // namespace __jni_impl::android::media

#include "../content/Context.hpp"
#include "./RemoteController_MetadataEditor.hpp"
#include "../os/Looper.hpp"
#include "../view/KeyEvent.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jint RemoteController::POSITION_SYNCHRONIZATION_CHECK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RemoteController",
			"POSITION_SYNCHRONIZATION_CHECK"
		);
	}
	jint RemoteController::POSITION_SYNCHRONIZATION_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RemoteController",
			"POSITION_SYNCHRONIZATION_NONE"
		);
	}
	
	// Constructors
	void RemoteController::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.RemoteController",
			"(Landroid/content/Context;Landroid/media/RemoteController$OnClientUpdateListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteController::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Looper arg2)
	{
		__thiz = QAndroidJniObject(
			"android.media.RemoteController",
			"(Landroid/content/Context;Landroid/media/RemoteController$OnClientUpdateListener;Landroid/os/Looper;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	jboolean RemoteController::clearArtworkConfiguration()
	{
		return __thiz.callMethod<jboolean>(
			"clearArtworkConfiguration",
			"()Z"
		);
	}
	QAndroidJniObject RemoteController::editMetadata()
	{
		return __thiz.callObjectMethod(
			"editMetadata",
			"()Landroid/media/RemoteController$MetadataEditor;"
		);
	}
	jlong RemoteController::getEstimatedMediaPosition()
	{
		return __thiz.callMethod<jlong>(
			"getEstimatedMediaPosition",
			"()J"
		);
	}
	jboolean RemoteController::seekTo(jlong arg0)
	{
		return __thiz.callMethod<jboolean>(
			"seekTo",
			"(J)Z",
			arg0
		);
	}
	jboolean RemoteController::sendMediaKeyEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"sendMediaKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean RemoteController::setArtworkConfiguration(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setArtworkConfiguration",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean RemoteController::setSynchronizationMode(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setSynchronizationMode",
			"(I)Z",
			arg0
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class RemoteController : public __jni_impl::android::media::RemoteController
	{
	public:
		RemoteController(QAndroidJniObject obj) { __thiz = obj; }
		RemoteController(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		RemoteController(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Looper arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::media

