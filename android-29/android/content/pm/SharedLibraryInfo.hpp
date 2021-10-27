#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content::pm
{
	class VersionedPackage;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content::pm
{
	class SharedLibraryInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint TYPE_BUILTIN();
		static jint TYPE_DYNAMIC();
		static jint TYPE_STATIC();
		static jint VERSION_UNDEFINED();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		QAndroidJniObject getDeclaringPackage();
		QAndroidJniObject getDependentPackages();
		jlong getLongVersion();
		jstring getName();
		jint getType();
		jint getVersion();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::content::pm

#include "VersionedPackage.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	QAndroidJniObject SharedLibraryInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.SharedLibraryInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint SharedLibraryInfo::TYPE_BUILTIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.SharedLibraryInfo",
			"TYPE_BUILTIN"
		);
	}
	jint SharedLibraryInfo::TYPE_DYNAMIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.SharedLibraryInfo",
			"TYPE_DYNAMIC"
		);
	}
	jint SharedLibraryInfo::TYPE_STATIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.SharedLibraryInfo",
			"TYPE_STATIC"
		);
	}
	jint SharedLibraryInfo::VERSION_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.SharedLibraryInfo",
			"VERSION_UNDEFINED"
		);
	}
	
	// Constructors
	void SharedLibraryInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.SharedLibraryInfo",
			"(V)V");
	}
	
	// Methods
	jint SharedLibraryInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject SharedLibraryInfo::getDeclaringPackage()
	{
		return __thiz.callObjectMethod(
			"getDeclaringPackage",
			"()Landroid/content/pm/VersionedPackage;"
		);
	}
	QAndroidJniObject SharedLibraryInfo::getDependentPackages()
	{
		return __thiz.callObjectMethod(
			"getDependentPackages",
			"()Ljava/util/List;"
		);
	}
	jlong SharedLibraryInfo::getLongVersion()
	{
		return __thiz.callMethod<jlong>(
			"getLongVersion",
			"()J"
		);
	}
	jstring SharedLibraryInfo::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SharedLibraryInfo::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jint SharedLibraryInfo::getVersion()
	{
		return __thiz.callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	jstring SharedLibraryInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SharedLibraryInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class SharedLibraryInfo : public __jni_impl::android::content::pm::SharedLibraryInfo
	{
	public:
		SharedLibraryInfo(QAndroidJniObject obj) { __thiz = obj; }
		SharedLibraryInfo()
		{
			__constructor();
		}
	};
} // namespace android::content::pm

