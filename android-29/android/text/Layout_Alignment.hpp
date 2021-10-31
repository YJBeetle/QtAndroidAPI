#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::text
{
	class Layout_Alignment : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ALIGN_CENTER();
		static QAndroidJniObject ALIGN_NORMAL();
		static QAndroidJniObject ALIGN_OPPOSITE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Layout_Alignment(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Layout_Alignment(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::text

