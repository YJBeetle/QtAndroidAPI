#pragma once

#include "../content/ContentResolver.def.hpp"
#include "./ContactsContract_PinnedPositions.def.hpp"

namespace android::provider
{
	// Fields
	inline jint ContactsContract_PinnedPositions::DEMOTED()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$PinnedPositions",
			"DEMOTED"
		);
	}
	inline jint ContactsContract_PinnedPositions::UNPINNED()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$PinnedPositions",
			"UNPINNED"
		);
	}
	
	// Constructors
	inline ContactsContract_PinnedPositions::ContactsContract_PinnedPositions()
		: JObject(
			"android.provider.ContactsContract$PinnedPositions",
			"()V"
		) {}
	
	// Methods
	inline void ContactsContract_PinnedPositions::pin(android::content::ContentResolver arg0, jlong arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.provider.ContactsContract$PinnedPositions",
			"pin",
			"(Landroid/content/ContentResolver;JI)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void ContactsContract_PinnedPositions::undemote(android::content::ContentResolver arg0, jlong arg1)
	{
		callStaticMethod<void>(
			"android.provider.ContactsContract$PinnedPositions",
			"undemote",
			"(Landroid/content/ContentResolver;J)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
