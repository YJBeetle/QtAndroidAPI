#include "./Context.hpp"
#include "../os/Parcel.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ComponentName.hpp"

namespace android::content
{
	// Fields
	JObject ComponentName::CREATOR()
	{
		return getStaticObjectField(
			"android.content.ComponentName",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	ComponentName::ComponentName(android::os::Parcel arg0)
		: JObject(
			"android.content.ComponentName",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	ComponentName::ComponentName(android::content::Context arg0, JClass arg1)
		: JObject(
			"android.content.ComponentName",
			"(Landroid/content/Context;Ljava/lang/Class;)V",
			arg0.object(),
			arg1.object<jclass>()
		) {}
	ComponentName::ComponentName(android::content::Context arg0, JString arg1)
		: JObject(
			"android.content.ComponentName",
			"(Landroid/content/Context;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	ComponentName::ComponentName(JString arg0, JString arg1)
		: JObject(
			"android.content.ComponentName",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	android::content::ComponentName ComponentName::createRelative(android::content::Context arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.content.ComponentName",
			"createRelative",
			"(Landroid/content/Context;Ljava/lang/String;)Landroid/content/ComponentName;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::content::ComponentName ComponentName::createRelative(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.content.ComponentName",
			"createRelative",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/content/ComponentName;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	android::content::ComponentName ComponentName::readFromParcel(android::os::Parcel arg0)
	{
		return callStaticObjectMethod(
			"android.content.ComponentName",
			"readFromParcel",
			"(Landroid/os/Parcel;)Landroid/content/ComponentName;",
			arg0.object()
		);
	}
	android::content::ComponentName ComponentName::unflattenFromString(JString arg0)
	{
		return callStaticObjectMethod(
			"android.content.ComponentName",
			"unflattenFromString",
			"(Ljava/lang/String;)Landroid/content/ComponentName;",
			arg0.object<jstring>()
		);
	}
	void ComponentName::writeToParcel(android::content::ComponentName arg0, android::os::Parcel arg1)
	{
		callStaticMethod<void>(
			"android.content.ComponentName",
			"writeToParcel",
			"(Landroid/content/ComponentName;Landroid/os/Parcel;)V",
			arg0.object(),
			arg1.object()
		);
	}
	android::content::ComponentName ComponentName::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/content/ComponentName;"
		);
	}
	jint ComponentName::compareTo(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	jint ComponentName::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint ComponentName::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ComponentName::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString ComponentName::flattenToShortString() const
	{
		return callObjectMethod(
			"flattenToShortString",
			"()Ljava/lang/String;"
		);
	}
	JString ComponentName::flattenToString() const
	{
		return callObjectMethod(
			"flattenToString",
			"()Ljava/lang/String;"
		);
	}
	JString ComponentName::getClassName() const
	{
		return callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		);
	}
	JString ComponentName::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	JString ComponentName::getShortClassName() const
	{
		return callObjectMethod(
			"getShortClassName",
			"()Ljava/lang/String;"
		);
	}
	jint ComponentName::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString ComponentName::toShortString() const
	{
		return callObjectMethod(
			"toShortString",
			"()Ljava/lang/String;"
		);
	}
	JString ComponentName::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ComponentName::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

