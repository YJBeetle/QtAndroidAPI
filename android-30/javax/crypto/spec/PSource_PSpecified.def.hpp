#pragma once

#include "./PSource.def.hpp"

class JByteArray;

namespace javax::crypto::spec
{
	class PSource_PSpecified : public javax::crypto::spec::PSource
	{
	public:
		// Fields
		static javax::crypto::spec::PSource_PSpecified DEFAULT();
		
		// QJniObject forward
		template<typename ...Ts> explicit PSource_PSpecified(const char *className, const char *sig, Ts...agv) : javax::crypto::spec::PSource(className, sig, std::forward<Ts>(agv)...) {}
		PSource_PSpecified(QJniObject obj) : javax::crypto::spec::PSource(obj) {}
		
		// Constructors
		PSource_PSpecified(JByteArray arg0);
		
		// Methods
		JByteArray getValue() const;
	};
} // namespace javax::crypto::spec

