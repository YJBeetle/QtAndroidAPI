#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./ReplacementTransformationMethod.hpp"


namespace android::text::method
{
	class SingleLineTransformationMethod : public android::text::method::ReplacementTransformationMethod
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SingleLineTransformationMethod(const char *className, const char *sig, Ts...agv) : android::text::method::ReplacementTransformationMethod(className, sig, std::forward<Ts>(agv)...) {}
		SingleLineTransformationMethod(QAndroidJniObject obj);
		
		// Constructors
		SingleLineTransformationMethod();
		
		// Methods
		static QAndroidJniObject getInstance();
	};
} // namespace android::text::method

