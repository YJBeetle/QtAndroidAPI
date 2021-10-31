#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Paint_Join : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BEVEL();
		static QAndroidJniObject MITER();
		static QAndroidJniObject ROUND();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Paint_Join(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Paint_Join(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

