#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace java::time::format
{
	class TextStyle : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject FULL();
		static QAndroidJniObject FULL_STANDALONE();
		static QAndroidJniObject NARROW();
		static QAndroidJniObject NARROW_STANDALONE();
		static QAndroidJniObject SHORT();
		static QAndroidJniObject SHORT_STANDALONE();
		
		TextStyle(QAndroidJniObject obj);
		// Constructors
		TextStyle() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
		QAndroidJniObject asNormal();
		QAndroidJniObject asStandalone();
		jboolean isStandalone();
	};
} // namespace java::time::format

