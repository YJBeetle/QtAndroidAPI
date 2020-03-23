#pragma once

#ifndef ANDROID_PROVIDER_BLOCKEDNUMBERCONTRACT_BLOCKEDNUMBERS
#define ANDROID_PROVIDER_BLOCKEDNUMBERCONTRACT_BLOCKEDNUMBERS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class BlockedNumberContract_BlockedNumbers : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject COLUMN_E164_NUMBER();
		static QAndroidJniObject COLUMN_ID();
		static QAndroidJniObject COLUMN_ORIGINAL_NUMBER();
		static QAndroidJniObject CONTENT_ITEM_TYPE();
		static QAndroidJniObject CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject BlockedNumberContract_BlockedNumbers::COLUMN_E164_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.BlockedNumberContract$BlockedNumbers",
			"COLUMN_E164_NUMBER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject BlockedNumberContract_BlockedNumbers::COLUMN_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.BlockedNumberContract$BlockedNumbers",
			"COLUMN_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject BlockedNumberContract_BlockedNumbers::COLUMN_ORIGINAL_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.BlockedNumberContract$BlockedNumbers",
			"COLUMN_ORIGINAL_NUMBER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject BlockedNumberContract_BlockedNumbers::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.BlockedNumberContract$BlockedNumbers",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject BlockedNumberContract_BlockedNumbers::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.BlockedNumberContract$BlockedNumbers",
			"CONTENT_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject BlockedNumberContract_BlockedNumbers::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.BlockedNumberContract$BlockedNumbers",
			"CONTENT_URI",
			"Landroid/net/Uri;");
	}
	
	// Constructors
	void BlockedNumberContract_BlockedNumbers::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.BlockedNumberContract$BlockedNumbers",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class BlockedNumberContract_BlockedNumbers : public __jni_impl::android::provider::BlockedNumberContract_BlockedNumbers
	{
	public:
		BlockedNumberContract_BlockedNumbers(QAndroidJniObject obj) { __thiz = obj; }
		BlockedNumberContract_BlockedNumbers()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_BLOCKEDNUMBERCONTRACT_BLOCKEDNUMBERS

