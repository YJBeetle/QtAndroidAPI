#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::view::inspector
{
	class StaticInspectionCompanionProvider : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StaticInspectionCompanionProvider(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StaticInspectionCompanionProvider(QAndroidJniObject obj);
		
		// Constructors
		StaticInspectionCompanionProvider();
		
		// Methods
		QAndroidJniObject provide(jclass arg0);
	};
} // namespace android::view::inspector

