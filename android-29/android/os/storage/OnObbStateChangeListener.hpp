#pragma once

#ifndef ANDROID_OS_STORAGE_ONOBBSTATECHANGELISTENER
#define ANDROID_OS_STORAGE_ONOBBSTATECHANGELISTENER

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::os::storage
{
	class OnObbStateChangeListener : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_ALREADY_MOUNTED();
		static jint ERROR_COULD_NOT_MOUNT();
		static jint ERROR_COULD_NOT_UNMOUNT();
		static jint ERROR_INTERNAL();
		static jint ERROR_NOT_MOUNTED();
		static jint ERROR_PERMISSION_DENIED();
		static jint MOUNTED();
		static jint UNMOUNTED();
		
		// Constructors
		void __constructor();
		
		// Methods
		void onObbStateChange(jstring arg0, jint arg1);
		void onObbStateChange(const QString &arg0, jint arg1);
	};
} // namespace __jni_impl::android::os::storage


namespace __jni_impl::android::os::storage
{
	// Fields
	jint OnObbStateChangeListener::ERROR_ALREADY_MOUNTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.storage.OnObbStateChangeListener",
			"ERROR_ALREADY_MOUNTED"
		);
	}
	jint OnObbStateChangeListener::ERROR_COULD_NOT_MOUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.storage.OnObbStateChangeListener",
			"ERROR_COULD_NOT_MOUNT"
		);
	}
	jint OnObbStateChangeListener::ERROR_COULD_NOT_UNMOUNT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.storage.OnObbStateChangeListener",
			"ERROR_COULD_NOT_UNMOUNT"
		);
	}
	jint OnObbStateChangeListener::ERROR_INTERNAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.storage.OnObbStateChangeListener",
			"ERROR_INTERNAL"
		);
	}
	jint OnObbStateChangeListener::ERROR_NOT_MOUNTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.storage.OnObbStateChangeListener",
			"ERROR_NOT_MOUNTED"
		);
	}
	jint OnObbStateChangeListener::ERROR_PERMISSION_DENIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.storage.OnObbStateChangeListener",
			"ERROR_PERMISSION_DENIED"
		);
	}
	jint OnObbStateChangeListener::MOUNTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.storage.OnObbStateChangeListener",
			"MOUNTED"
		);
	}
	jint OnObbStateChangeListener::UNMOUNTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.storage.OnObbStateChangeListener",
			"UNMOUNTED"
		);
	}
	
	// Constructors
	void OnObbStateChangeListener::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.storage.OnObbStateChangeListener",
			"()V"
		);
	}
	
	// Methods
	void OnObbStateChangeListener::onObbStateChange(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onObbStateChange",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void OnObbStateChangeListener::onObbStateChange(const QString &arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onObbStateChange",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
} // namespace __jni_impl::android::os::storage

namespace android::os::storage
{
	class OnObbStateChangeListener : public __jni_impl::android::os::storage::OnObbStateChangeListener
	{
	public:
		OnObbStateChangeListener(QAndroidJniObject obj) { __thiz = obj; }
		OnObbStateChangeListener()
		{
			__constructor();
		}
	};
} // namespace android::os::storage

#endif // ANDROID_OS_STORAGE_ONOBBSTATECHANGELISTENER

