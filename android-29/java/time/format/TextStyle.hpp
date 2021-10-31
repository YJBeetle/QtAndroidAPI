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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextStyle(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		TextStyle(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
		QAndroidJniObject asNormal();
		QAndroidJniObject asStandalone();
		jboolean isStandalone();
	};
} // namespace java::time::format

