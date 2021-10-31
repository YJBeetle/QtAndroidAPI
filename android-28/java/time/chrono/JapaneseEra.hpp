#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::time
{
	class LocalDate;
}
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
	class JapaneseEra : public __JniBaseClass
	{
	public:
		// Fields
		static java::time::chrono::JapaneseEra HEISEI();
		static java::time::chrono::JapaneseEra MEIJI();
		static java::time::chrono::JapaneseEra REIWA();
		static java::time::chrono::JapaneseEra SHOWA();
		static java::time::chrono::JapaneseEra TAISHO();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JapaneseEra(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		JapaneseEra(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::chrono::JapaneseEra of(jint arg0);
		static java::time::chrono::JapaneseEra valueOf(jstring arg0);
		static jarray values();
		jstring getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1);
		jint getValue();
		java::time::temporal::ValueRange range(__JniBaseClass arg0);
		jstring toString();
	};
} // namespace java::time::chrono

