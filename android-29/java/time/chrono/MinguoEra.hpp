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
	class MinguoEra : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BEFORE_ROC();
		static QAndroidJniObject ROC();
		
		MinguoEra(QAndroidJniObject obj);
		// Constructors
		MinguoEra() = default;
		
		// Methods
		static QAndroidJniObject of(jint arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
		jstring getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1);
		jint getValue();
	};
} // namespace java::time::chrono

