//
// Quantum Script Extension SCard
//
// Copyright (c) 2020 Grigore Stefan <g_stefan@yahoo.com>
// Created by Grigore Stefan <g_stefan@yahoo.com>
//
// MIT License (MIT) <http://opensource.org/licenses/MIT>
//

#include "quantum-script-extension-scard-version.hpp"

namespace Quantum {
	namespace Script {
		namespace Extension {
			namespace SCard {
				namespace Version {

					static const char *version_ = "1.0.0";
					static const char *build_ = "32";
					static const char *versionWithBuild_ = "1.0.0.32";
					static const char *datetime_ = "2019-05-13 02:59:53";

					const char *version() {
						return version_;
					};
					const char *build() {
						return build_;
					};
					const char *versionWithBuild() {
						return versionWithBuild_;
					};
					const char *datetime() {
						return datetime_;
					};

				};
			};
		};
	};
};


