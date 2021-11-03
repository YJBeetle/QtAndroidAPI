#pragma once

#include "../../../JObject.hpp"


namespace javax::crypto::spec
{
	class PSource : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PSource(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PSource(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getAlgorithm();
	};
} // namespace javax::crypto::spec

