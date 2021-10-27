#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::widget
{
	class GridLayout_Alignment;
}

namespace android::widget
{
	class GridLayout_Spec : public __JniBaseClass
	{
	public:
		// Fields
		
		GridLayout_Spec(QAndroidJniObject obj);
		// Constructors
		GridLayout_Spec() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace android::widget

