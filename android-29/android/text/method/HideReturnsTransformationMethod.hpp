#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./ReplacementTransformationMethod.hpp"


namespace android::text::method
{
	class HideReturnsTransformationMethod : public android::text::method::ReplacementTransformationMethod
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit HideReturnsTransformationMethod(const char *className, const char *sig, Ts...agv) : android::text::method::ReplacementTransformationMethod(className, sig, std::forward<Ts>(agv)...) {}
		HideReturnsTransformationMethod(QAndroidJniObject obj);
		
		// Constructors
		HideReturnsTransformationMethod();
		
		// Methods
		static QAndroidJniObject getInstance();
	};
} // namespace android::text::method

