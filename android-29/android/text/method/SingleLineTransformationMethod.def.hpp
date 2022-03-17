#pragma once

#include "./ReplacementTransformationMethod.def.hpp"

class JCharArray;

namespace android::text::method
{
	class SingleLineTransformationMethod : public android::text::method::ReplacementTransformationMethod
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SingleLineTransformationMethod(const char *className, const char *sig, Ts...agv) : android::text::method::ReplacementTransformationMethod(className, sig, std::forward<Ts>(agv)...) {}
		SingleLineTransformationMethod(QAndroidJniObject obj) : android::text::method::ReplacementTransformationMethod(obj) {}
		
		// Constructors
		SingleLineTransformationMethod();
		
		// Methods
		static android::text::method::SingleLineTransformationMethod getInstance();
	};
} // namespace android::text::method

