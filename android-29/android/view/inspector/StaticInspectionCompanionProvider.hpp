#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::view::inspector
{
	class StaticInspectionCompanionProvider : public __JniBaseClass
	{
	public:
		// Fields
		
		StaticInspectionCompanionProvider(QAndroidJniObject obj);
		// Constructors
		StaticInspectionCompanionProvider();
		
		// Methods
		QAndroidJniObject provide(jclass arg0);
	};
} // namespace android::view::inspector

