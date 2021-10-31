#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"

namespace java::time::format
{
	class TextStyle;
}
namespace java::util
{
	class Locale;
}

namespace java::time::chrono
{
	class ThaiBuddhistEra : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BE();
		static QAndroidJniObject BEFORE_BE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ThaiBuddhistEra(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ThaiBuddhistEra(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject of(jint arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
		jstring getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1);
		jint getValue();
	};
} // namespace java::time::chrono

