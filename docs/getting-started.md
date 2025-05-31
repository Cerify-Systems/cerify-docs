# Getting Started with Cerify

This guide will help you get started with Cerify for smart contract analysis and certification.

## Prerequisites

- Node.js (v14.0.0 or higher)
- npm (v6.0.0 or higher)
- Ethereum development environment (Hardhat/Truffle)
- Solidity knowledge

## Installation

1. Install Cerify globally:
```bash
npm install -g cerify-cli
```

2. Initialize a new project:
```bash
cerify init my-project
cd my-project
```

## Basic Usage

1. Analyze a smart contract:
```bash
cerify analyze path/to/contract.sol
```

2. Generate certification report:
```bash
cerify certify path/to/contract.sol
```

## Configuration

Create a `cerify.config.js` file in your project root:

```javascript
module.exports = {
  solidity: {
    version: "0.8.0",
    optimizer: {
      enabled: true,
      runs: 200
    }
  },
  analysis: {
    depth: "deep",
    tests: ["security", "gas", "best-practices"]
  }
};
```

## Next Steps

- Read the [User Guide](user-guide.md) for detailed usage instructions
- Check out [API Reference](api-reference.md) for programmatic usage
- Join our [Discord community](https://discord.gg/cerify) for support 