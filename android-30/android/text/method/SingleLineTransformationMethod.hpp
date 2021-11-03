#pragma once

#include "./ReplacementTransformationMethod.hpp"

class JCharArray;

namespace android::text::method
{
	class SingleLineTransformationMethod : public android::text::method::ReplacementTransformationMethod
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SingleLineTransformationMethod(const char *className, const char *sig, Ts...agv) : android::text::method::ReplacementTransformationMethod(className, sig, std::forward<Ts>(agv)...) {}
		SingleLineTransformationMethod(QJniObject obj);
		
		// Constructors
		SingleLineTransformationMethod();
		
		// Methods
		static android::text::method::SingleLineTransformationMethod getInstance();
	};
} // namespace android::text::method

