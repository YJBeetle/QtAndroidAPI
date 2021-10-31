#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::webkit
{
	class WebSettings_LayoutAlgorithm : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject NARROW_COLUMNS();
		static QAndroidJniObject NORMAL();
		static QAndroidJniObject SINGLE_COLUMN();
		static QAndroidJniObject TEXT_AUTOSIZING();
		
		WebSettings_LayoutAlgorithm(QAndroidJniObject obj);
		// Constructors
		WebSettings_LayoutAlgorithm() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::webkit

