#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Paint_Style : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject FILL();
		static QAndroidJniObject FILL_AND_STROKE();
		static QAndroidJniObject STROKE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Paint_Style(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Paint_Style(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

