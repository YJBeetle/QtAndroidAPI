#include "./Contacts_People_Phones.hpp"

namespace android::provider
{
	// Fields
	jstring Contacts_People_Phones::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People$Phones",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_People_Phones::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Contacts$People$Phones",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	Contacts_People_Phones::Contacts_People_Phones(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

