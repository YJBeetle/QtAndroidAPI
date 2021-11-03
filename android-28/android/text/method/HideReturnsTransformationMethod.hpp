#pragma once

#include "./ReplacementTransformationMethod.hpp"

class JCharArray;

namespace android::text::method
{
	class HideReturnsTransformationMethod : public android::text::method::ReplacementTransformationMethod
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit HideReturnsTransformationMethod(const char *className, const char *sig, Ts...agv) : android::text::method::ReplacementTransformationMethod(className, sig, std::forward<Ts>(agv)...) {}
		HideReturnsTransformationMethod(QJniObject obj);
		
		// Constructors
		HideReturnsTransformationMethod();
		
		// Methods
		static android::text::method::HideReturnsTransformationMethod getInstance();
	};
} // namespace android::text::method

