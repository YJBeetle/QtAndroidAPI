#include "../content/ContentResolver.hpp"
#include "./ContactsContract_PinnedPositions.hpp"

namespace android::provider
{
	// Fields
	jint ContactsContract_PinnedPositions::DEMOTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$PinnedPositions",
			"DEMOTED"
		);
	}
	jint ContactsContract_PinnedPositions::UNPINNED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.ContactsContract$PinnedPositions",
			"UNPINNED"
		);
	}
	
	ContactsContract_PinnedPositions::ContactsContract_PinnedPositions(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ContactsContract_PinnedPositions::ContactsContract_PinnedPositions()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$PinnedPositions",
			"()V"
		);
	}
	
	// Methods
	void ContactsContract_PinnedPositions::pin(android::content::ContentResolver arg0, jlong arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.ContactsContract$PinnedPositions",
			"pin",
			"(Landroid/content/ContentResolver;JI)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void ContactsContract_PinnedPositions::undemote(android::content::ContentResolver arg0, jlong arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.ContactsContract$PinnedPositions",
			"undemote",
			"(Landroid/content/ContentResolver;J)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::provider

