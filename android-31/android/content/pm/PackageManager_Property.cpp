#include "../../os/Parcel.hpp"
#include "./PackageManager_Property.hpp"

namespace android::content::pm
{
	// Fields
	JObject PackageManager_Property::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager$Property",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	PackageManager_Property::PackageManager_Property(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint PackageManager_Property::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PackageManager_Property::getBoolean()
	{
		return callMethod<jboolean>(
			"getBoolean",
			"()Z"
		);
	}
	jstring PackageManager_Property::getClassName()
	{
		return callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jfloat PackageManager_Property::getFloat()
	{
		return callMethod<jfloat>(
			"getFloat",
			"()F"
		);
	}
	jint PackageManager_Property::getInteger()
	{
		return callMethod<jint>(
			"getInteger",
			"()I"
		);
	}
	jstring PackageManager_Property::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageManager_Property::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint PackageManager_Property::getResourceId()
	{
		return callMethod<jint>(
			"getResourceId",
			"()I"
		);
	}
	jstring PackageManager_Property::getString()
	{
		return callObjectMethod(
			"getString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean PackageManager_Property::isBoolean()
	{
		return callMethod<jboolean>(
			"isBoolean",
			"()Z"
		);
	}
	jboolean PackageManager_Property::isFloat()
	{
		return callMethod<jboolean>(
			"isFloat",
			"()Z"
		);
	}
	jboolean PackageManager_Property::isInteger()
	{
		return callMethod<jboolean>(
			"isInteger",
			"()Z"
		);
	}
	jboolean PackageManager_Property::isResourceId()
	{
		return callMethod<jboolean>(
			"isResourceId",
			"()Z"
		);
	}
	jboolean PackageManager_Property::isString()
	{
		return callMethod<jboolean>(
			"isString",
			"()Z"
		);
	}
	void PackageManager_Property::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

