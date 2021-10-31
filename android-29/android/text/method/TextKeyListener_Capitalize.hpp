#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::text::method
{
	class TextKeyListener_Capitalize : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CHARACTERS();
		static QAndroidJniObject NONE();
		static QAndroidJniObject SENTENCES();
		static QAndroidJniObject WORDS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextKeyListener_Capitalize(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		TextKeyListener_Capitalize(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::text::method

