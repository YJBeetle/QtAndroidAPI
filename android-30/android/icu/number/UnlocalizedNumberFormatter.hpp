#pragma once

#include "./NumberFormatterSettings.hpp"

namespace android::icu::number
{
	class LocalizedNumberFormatter;
}
namespace android::icu::util
{
	class ULocale;
}
namespace java::util
{
	class Locale;
}

namespace android::icu::number
{
	class UnlocalizedNumberFormatter : public android::icu::number::NumberFormatterSettings
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UnlocalizedNumberFormatter(const char *className, const char *sig, Ts...agv) : android::icu::number::NumberFormatterSettings(className, sig, std::forward<Ts>(agv)...) {}
		UnlocalizedNumberFormatter(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::icu::number::LocalizedNumberFormatter locale(android::icu::util::ULocale arg0) const;
		android::icu::number::LocalizedNumberFormatter locale(java::util::Locale arg0) const;
	};
} // namespace android::icu::number

