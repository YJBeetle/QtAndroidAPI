#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content::res
{
	class ObbInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint OBB_OVERLAY();
		jstring filename();
		jint flags();
		jstring packageName();
		jint version();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::content::res

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::content::res
{
	// Fields
	QAndroidJniObject ObbInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.res.ObbInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ObbInfo::OBB_OVERLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.ObbInfo",
			"OBB_OVERLAY"
		);
	}
	jstring ObbInfo::filename()
	{
		return __thiz.getObjectField(
			"filename",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ObbInfo::flags()
	{
		return __thiz.getField<jint>(
			"flags"
		);
	}
	jstring ObbInfo::packageName()
	{
		return __thiz.getObjectField(
			"packageName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ObbInfo::version()
	{
		return __thiz.getField<jint>(
			"version"
		);
	}
	
	// Constructors
	void ObbInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.res.ObbInfo",
			"(V)V");
	}
	
	// Methods
	jint ObbInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring ObbInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ObbInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::content::res

namespace android::content::res
{
	class ObbInfo : public __jni_impl::android::content::res::ObbInfo
	{
	public:
		ObbInfo(QAndroidJniObject obj) { __thiz = obj; }
		ObbInfo()
		{
			__constructor();
		}
	};
} // namespace android::content::res

