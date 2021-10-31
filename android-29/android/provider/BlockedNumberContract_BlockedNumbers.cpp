#include "../net/Uri.hpp"
#include "./BlockedNumberContract_BlockedNumbers.hpp"

namespace android::provider
{
	// Fields
	jstring BlockedNumberContract_BlockedNumbers::COLUMN_E164_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.BlockedNumberContract$BlockedNumbers",
			"COLUMN_E164_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BlockedNumberContract_BlockedNumbers::COLUMN_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.BlockedNumberContract$BlockedNumbers",
			"COLUMN_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BlockedNumberContract_BlockedNumbers::COLUMN_ORIGINAL_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.BlockedNumberContract$BlockedNumbers",
			"COLUMN_ORIGINAL_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BlockedNumberContract_BlockedNumbers::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.BlockedNumberContract$BlockedNumbers",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BlockedNumberContract_BlockedNumbers::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.BlockedNumberContract$BlockedNumbers",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject BlockedNumberContract_BlockedNumbers::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.BlockedNumberContract$BlockedNumbers",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QAndroidJniObject forward
	BlockedNumberContract_BlockedNumbers::BlockedNumberContract_BlockedNumbers(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

