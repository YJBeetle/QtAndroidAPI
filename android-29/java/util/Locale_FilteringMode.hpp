#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace java::util
{
	class Locale_FilteringMode : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject AUTOSELECT_FILTERING();
		static QAndroidJniObject EXTENDED_FILTERING();
		static QAndroidJniObject IGNORE_EXTENDED_RANGES();
		static QAndroidJniObject MAP_EXTENDED_RANGES();
		static QAndroidJniObject REJECT_EXTENDED_RANGES();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Locale_FilteringMode(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Locale_FilteringMode(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::util

