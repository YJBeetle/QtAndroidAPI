#include "../content/ContentResolver.hpp"
#include "./ContactsContract_PinnedPositions.hpp"

namespace android::provider
{
	// Fields
	jint ContactsContract_PinnedPositions::DEMOTED()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$PinnedPositions",
			"DEMOTED"
		);
	}
	jint ContactsContract_PinnedPositions::UNPINNED()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$PinnedPositions",
			"UNPINNED"
		);
	}
	
	// Constructors
	ContactsContract_PinnedPositions::ContactsContract_PinnedPositions()
		: JObject(
			"android.provider.ContactsContract$PinnedPositions",
			"()V"
		) {}
	
	// Methods
	void ContactsContract_PinnedPositions::pin(android::content::ContentResolver arg0, jlong arg1, jint arg2)
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
	void ContactsContract_PinnedPositions::undemote(android::content::ContentResolver arg0, jlong arg1)
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

