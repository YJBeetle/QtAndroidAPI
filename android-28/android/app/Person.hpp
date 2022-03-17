#pragma once

#include "./Person_Builder.def.hpp"
#include "../graphics/drawable/Icon.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./Person.def.hpp"

namespace android::app
{
	// Fields
	inline JObject Person::CREATOR()
	{
		return getStaticObjectField(
			"android.app.Person",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint Person::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::graphics::drawable::Icon Person::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	inline JString Person::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		);
	}
	inline JString Person::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString Person::getUri() const
	{
		return callObjectMethod(
			"getUri",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean Person::isBot() const
	{
		return callMethod<jboolean>(
			"isBot",
			"()Z"
		);
	}
	inline jboolean Person::isImportant() const
	{
		return callMethod<jboolean>(
			"isImportant",
			"()Z"
		);
	}
	inline android::app::Person_Builder Person::toBuilder() const
	{
		return callObjectMethod(
			"toBuilder",
			"()Landroid/app/Person$Builder;"
		);
	}
	inline void Person::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

// Base class headers

