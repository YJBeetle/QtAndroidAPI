#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"

namespace java::time::format
{
	class TextStyle;
}
namespace java::time::temporal
{
	class ValueRange;
}
namespace java::util
{
	class Locale;
}

namespace java::time::chrono
{
	class HijrahEra : public java::lang::Enum
	{
	public:
		// Fields
		static java::time::chrono::HijrahEra AH();
		
		// QJniObject forward
		template<typename ...Ts> explicit HijrahEra(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		HijrahEra(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::chrono::HijrahEra of(jint arg0);
		static java::time::chrono::HijrahEra valueOf(jstring arg0);
		static jarray values();
		jstring getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1);
		jint getValue();
		java::time::temporal::ValueRange range(__JniBaseClass arg0);
	};
} // namespace java::time::chrono

