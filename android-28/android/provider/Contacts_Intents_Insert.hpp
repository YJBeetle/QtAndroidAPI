#pragma once

#include "../../JString.hpp"
#include "./Contacts_Intents_Insert.def.hpp"

namespace android::provider
{
	// Fields
	inline JString Contacts_Intents_Insert::ACTION()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"ACTION",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents_Insert::COMPANY()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"COMPANY",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents_Insert::EMAIL()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"EMAIL",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents_Insert::EMAIL_ISPRIMARY()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"EMAIL_ISPRIMARY",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents_Insert::EMAIL_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"EMAIL_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents_Insert::FULL_MODE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"FULL_MODE",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents_Insert::IM_HANDLE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"IM_HANDLE",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents_Insert::IM_ISPRIMARY()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"IM_ISPRIMARY",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents_Insert::IM_PROTOCOL()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"IM_PROTOCOL",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents_Insert::JOB_TITLE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"JOB_TITLE",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents_Insert::NAME()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents_Insert::NOTES()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"NOTES",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents_Insert::PHONE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"PHONE",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents_Insert::PHONETIC_NAME()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"PHONETIC_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents_Insert::PHONE_ISPRIMARY()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"PHONE_ISPRIMARY",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents_Insert::PHONE_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"PHONE_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents_Insert::POSTAL()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"POSTAL",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents_Insert::POSTAL_ISPRIMARY()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"POSTAL_ISPRIMARY",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents_Insert::POSTAL_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"POSTAL_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents_Insert::SECONDARY_EMAIL()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"SECONDARY_EMAIL",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents_Insert::SECONDARY_EMAIL_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"SECONDARY_EMAIL_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents_Insert::SECONDARY_PHONE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"SECONDARY_PHONE",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents_Insert::SECONDARY_PHONE_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"SECONDARY_PHONE_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents_Insert::TERTIARY_EMAIL()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"TERTIARY_EMAIL",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents_Insert::TERTIARY_EMAIL_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"TERTIARY_EMAIL_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents_Insert::TERTIARY_PHONE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"TERTIARY_PHONE",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_Intents_Insert::TERTIARY_PHONE_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Intents$Insert",
			"TERTIARY_PHONE_TYPE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline Contacts_Intents_Insert::Contacts_Intents_Insert()
		: JObject(
			"android.provider.Contacts$Intents$Insert",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

// Base class headers

