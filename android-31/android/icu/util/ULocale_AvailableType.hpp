#pragma once

#include "../../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::icu::util
{
	class ULocale_AvailableType : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::util::ULocale_AvailableType DEFAULT();
		static android::icu::util::ULocale_AvailableType ONLY_LEGACY_ALIASES();
		static android::icu::util::ULocale_AvailableType WITH_LEGACY_ALIASES();
		
		// QJniObject forward
		template<typename ...Ts> explicit ULocale_AvailableType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ULocale_AvailableType(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::util::ULocale_AvailableType valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::util

