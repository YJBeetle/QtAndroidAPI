#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class Session2Command;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::media
{
	class Session2CommandGroup : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		QAndroidJniObject getCommands();
		jboolean hasCommand(__jni_impl::android::media::Session2Command arg0);
		jboolean hasCommand(jint arg0);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::media

#include "Session2Command.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::media
{
	// Fields
	QAndroidJniObject Session2CommandGroup::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.Session2CommandGroup",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void Session2CommandGroup::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.Session2CommandGroup",
			"(V)V");
	}
	
	// Methods
	jint Session2CommandGroup::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject Session2CommandGroup::getCommands()
	{
		return __thiz.callObjectMethod(
			"getCommands",
			"()Ljava/util/Set;"
		);
	}
	jboolean Session2CommandGroup::hasCommand(__jni_impl::android::media::Session2Command arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasCommand",
			"(Landroid/media/Session2Command;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Session2CommandGroup::hasCommand(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasCommand",
			"(I)Z",
			arg0
		);
	}
	void Session2CommandGroup::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class Session2CommandGroup : public __jni_impl::android::media::Session2CommandGroup
	{
	public:
		Session2CommandGroup(QAndroidJniObject obj) { __thiz = obj; }
		Session2CommandGroup()
		{
			__constructor();
		}
	};
} // namespace android::media

