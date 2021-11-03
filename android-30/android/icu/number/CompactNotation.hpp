#pragma once

#include "./Notation.hpp"

namespace android::icu::number
{
	class CompactNotation : public android::icu::number::Notation
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CompactNotation(const char *className, const char *sig, Ts...agv) : android::icu::number::Notation(className, sig, std::forward<Ts>(agv)...) {}
		CompactNotation(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::icu::number

