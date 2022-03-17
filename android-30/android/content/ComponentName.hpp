#pragma once

#include "./Context.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ComponentName.def.hpp"

namespace android::content
{
	// Fields
	inline JObject ComponentName::CREATOR()
	{
		return getStaticObjectField(
			"android.content.ComponentName",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline ComponentName::ComponentName(android::os::Parcel arg0)
		: JObject(
			"android.content.ComponentName",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline ComponentName::ComponentName(android::content::Context arg0, JClass arg1)
		: JObject(
			"android.content.ComponentName",
			"(Landroid/content/Context;Ljava/lang/Class;)V",
			arg0.object(),
			arg1.object<jclass>()
		) {}
	inline ComponentName::ComponentName(android::content::Context arg0, JString arg1)
		: JObject(
			"android.content.ComponentName",
			"(Landroid/content/Context;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	inline ComponentName::ComponentName(JString arg0, JString arg1)
		: JObject(
			"android.content.ComponentName",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline android::content::ComponentName ComponentName::createRelative(android::content::Context arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.content.ComponentName",
			"createRelative",
			"(Landroid/content/Context;Ljava/lang/String;)Landroid/content/ComponentName;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::content::ComponentName ComponentName::createRelative(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.content.ComponentName",
			"createRelative",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/content/ComponentName;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline android::content::ComponentName ComponentName::readFromParcel(android::os::Parcel arg0)
	{
		return callStaticObjectMethod(
			"android.content.ComponentName",
			"readFromParcel",
			"(Landroid/os/Parcel;)Landroid/content/ComponentName;",
			arg0.object()
		);
	}
	inline android::content::ComponentName ComponentName::unflattenFromString(JString arg0)
	{
		return callStaticObjectMethod(
			"android.content.ComponentName",
			"unflattenFromString",
			"(Ljava/lang/String;)Landroid/content/ComponentName;",
			arg0.object<jstring>()
		);
	}
	inline void ComponentName::writeToParcel(android::content::ComponentName arg0, android::os::Parcel arg1)
	{
		callStaticMethod<void>(
			"android.content.ComponentName",
			"writeToParcel",
			"(Landroid/content/ComponentName;Landroid/os/Parcel;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::content::ComponentName ComponentName::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/content/ComponentName;"
		);
	}
	inline jint ComponentName::compareTo(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	inline jint ComponentName::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint ComponentName::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ComponentName::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString ComponentName::flattenToShortString() const
	{
		return callObjectMethod(
			"flattenToShortString",
			"()Ljava/lang/String;"
		);
	}
	inline JString ComponentName::flattenToString() const
	{
		return callObjectMethod(
			"flattenToString",
			"()Ljava/lang/String;"
		);
	}
	inline JString ComponentName::getClassName() const
	{
		return callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		);
	}
	inline JString ComponentName::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline JString ComponentName::getShortClassName() const
	{
		return callObjectMethod(
			"getShortClassName",
			"()Ljava/lang/String;"
		);
	}
	inline jint ComponentName::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString ComponentName::toShortString() const
	{
		return callObjectMethod(
			"toShortString",
			"()Ljava/lang/String;"
		);
	}
	inline JString ComponentName::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ComponentName::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

// Base class headers

