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
		
		TextView_BufferType(QAndroidJniObject obj);
		// Constructors
		TextView_BufferType() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::widget

