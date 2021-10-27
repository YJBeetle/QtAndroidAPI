#pragma once

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
		static jstring COLUMN_E164_NUMBER();
		static jstring COLUMN_ID();
		static jstring COLUMN_ORIGINAL_NUMBER();
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
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

