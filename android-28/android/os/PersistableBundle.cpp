#include "./Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PersistableBundle.hpp"

namespace android::os
{
	// Fields
	JObject PersistableBundle::CREATOR()
	{
		return getStaticObjectField(
			"android.os.PersistableBundle",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	android::os::PersistableBundle PersistableBundle::EMPTY()
	{
		return getStaticObjectField(
			"android.os.PersistableBundle",
			"EMPTY",
			"Landroid/os/PersistableBundle;"
		);
	}
	
	// QAndroidJniObject forward
	PersistableBundle::PersistableBundle(QAndroidJniObject obj) : android::os::BaseBundle(obj) {}
	
	// Constructors
	PersistableBundle::PersistableBundle()
		: android::os::BaseBundle(
			"android.os.PersistableBundle",
			"()V"
		) {}
	PersistableBundle::PersistableBundle(android::os::PersistableBundle &arg0)
		: android::os::BaseBundle(
			"android.os.PersistableBundle",
			"(Landroid/os/PersistableBundle;)V",
			arg0.object()
		) {}
	PersistableBundle::PersistableBundle(jint arg0)
		: android::os::BaseBundle(
			"android.os.PersistableBundle",
			"(I)V",
			arg0
		) {}
	
	// Methods
	JObject PersistableBundle::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	android::os::PersistableBundle PersistableBundle::deepCopy()
	{
		return callObjectMethod(
			"deepCopy",
			"()Landroid/os/PersistableBundle;"
		);
	}
	jint PersistableBundle::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::os::PersistableBundle PersistableBundle::getPersistableBundle(JString arg0)
	{
		return callObjectMethod(
			"getPersistableBundle",
			"(Ljava/lang/String;)Landroid/os/PersistableBundle;",
			arg0.object<jstring>()
		);
	}
	void PersistableBundle::putPersistableBundle(JString arg0, android::os::PersistableBundle arg1)
	{
		callMethod<void>(
			"putPersistableBundle",
			"(Ljava/lang/String;Landroid/os/PersistableBundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JString PersistableBundle::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void PersistableBundle::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

