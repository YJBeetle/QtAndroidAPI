#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::widget
{
	class TextView_BufferType : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject EDITABLE();
		static QAndroidJniObject NORMAL();
		static QAndroidJniObject SPANNABLE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextView_BufferType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		TextView_BufferType(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::widget

