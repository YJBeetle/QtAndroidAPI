#pragma once

#include "../../../JObject.hpp"

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
	class JapaneseEra : public JObject
	{
	public:
		// Fields
		static java::time::chrono::JapaneseEra HEISEI();
		static java::time::chrono::JapaneseEra MEIJI();
		static java::time::chrono::JapaneseEra REIWA();
		static java::time::chrono::JapaneseEra SHOWA();
		static java::time::chrono::JapaneseEra TAISHO();
		
		// QJniObject forward
		template<typename ...Ts> explicit JapaneseEra(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JapaneseEra(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::chrono::JapaneseEra of(jint arg0);
		static java::time::chrono::JapaneseEra valueOf(jstring arg0);
		static jarray values();
		jstring getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1);
		jint getValue();
		java::time::temporal::ValueRange range(JObject arg0);
		jstring toString();
	};
} // namespace java::time::chrono

